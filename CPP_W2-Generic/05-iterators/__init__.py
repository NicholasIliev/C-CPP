import check50
import check50.c
import re

@check50.check()
def exists():
    check50.exists("iterators.cpp")
    with open("iterators.cpp") as f:
        sources_buf = f.read()
    return sources_buf

@check50.check(exists)
def compiles():
    check50.c.compile("iterators.cpp", exe_name="iterators", cc="g++", ggdb=True, lm=True, std='c++17')

@check50.check(exists)
def validate(sources_buf):
    pass

@check50.check(compiles)
def output_correct():
    check50.run("./iterators")\
            .stdout("16258")\
            .exit()

