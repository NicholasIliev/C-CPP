import check50
import check50.c
import re

@check50.check()
def exists():
    check50.exists("overloading2.cpp")
    with open("overloading2.cpp") as f:
        sources_buf = f.read()
    return sources_buf

@check50.check(exists)
def compiles():
    check50.c.compile("overloading2.cpp", exe_name="overloading2", cc="g++", ggdb=True, lm=True, std='c++17')

@check50.check(exists)
def validate(sources_buf):
    pass

@check50.check(compiles)
def output_correct():
    check50.run("./overloading2")\
        .stdout("13+16i", regex=False).exit()

