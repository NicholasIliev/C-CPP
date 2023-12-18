import check50
import check50.c
import re

@check50.check()
def exists():
    check50.exists("map.cpp")
    with open("map.cpp") as f:
        sources_buf = f.read()
    return sources_buf

@check50.check(exists)
def compiles():
    check50.c.compile("map.cpp", exe_name="map", cc="g++", ggdb=True, lm=True, std='c++17')

@check50.check(exists)
def validate(sources_buf):
    if "std::vector" in sources_buf:
        raise check50.Failure("There should be no vector objects in the code")
    if not re.search("int dot.*std::map.*std::map.*", sources_buf):
        raise check50.Failure("dot should take std::map arguments")

@check50.check(compiles)
def output_correct():
    check50.run("./map")\
            .stdout("170")\
            .exit()

