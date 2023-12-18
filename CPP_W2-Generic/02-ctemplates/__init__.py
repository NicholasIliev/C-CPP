import check50
import check50.c
import re

@check50.check()
def exists():
    check50.exists("ctemplates.cpp")
    with open("ctemplates.cpp") as f:
        sources_buf = f.read()
    return sources_buf

@check50.check(exists)
def compiles():
    check50.c.compile("ctemplates.cpp", exe_name="ctemplates", cc="g++", ggdb=True, lm=True, std='c++17')

@check50.check(exists)
def validate(sources_buf):
    if not re.search("template\s+\<typename\ \S+>\s+class Complex", sources_buf):
        raise check50.Failure("No templated Complex found!")

@check50.check(compiles)
def output_correct():
    check50.run("./ctemplates")\
        .stdout("(4+5i) + (9+11i) = (13+16i)", regex=False)\
        .stdout("(4.1+5.1i) + (8.9+10.9i) = (13+16i)", regex=False)\
        .exit()
