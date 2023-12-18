import check50
import check50.c
import re

@check50.check()
def exists():
    check50.exists("ftemplates.cpp")
    with open("ftemplates.cpp") as f:
        sources_buf = f.read()
    return sources_buf

@check50.check(exists)
def compiles():
    check50.c.compile("ftemplates.cpp", exe_name="ftemplates", cc="g++", ggdb=True, lm=True, std='c++17')

@check50.check(exists)
def validate(sources_buf):
    if sources_buf.count("void add_and_print") != 1:
        raise check50.Failure("There should be only one definition of add_and_print")
    if not re.search("template\s+\<typename\ \S+>\s+void add_and_print", sources_buf):
        raise check50.Failure("No templated add_and_print found!")

@check50.check(compiles)
def output_correct():
    check50.run("./ftemplates")\
        .stdout("(4+5i) + (9+11i) = (13+16i)", regex=False)\
        .stdout("4 \+ 9 = 13")\
        .stdout("5.8 \+ 11.2 = 17")\
        .exit()
