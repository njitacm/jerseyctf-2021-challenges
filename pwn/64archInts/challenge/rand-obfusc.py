import sys

FLAG = "jctf{hexT0Int64bit-lemme-makeThisstring-gigantic-forKicks-Nice-work_0n-Cmps}"
endLine = "\n"
def cringe_strings_vulnerable_method(flag):
    retStr = "{'"
    retStr += "\','".join(list(flag))
    retStr += "'}"
    # print(retStr, len(flag))
    return retStr

varTemplate = lambda x: f'text[{x}]'
printfTemplate = lambda x: f'text[{x}]'
fullLaziness = lambda length, values : f"char smol_compress[{length}] = {values};"


# Does a quick compression to get past the age old and clever `strings` command 
def chad_string_shatter_method(flag):
    print(flag, len(flag))
    sets = set(flag)

  
    # print(sets, len(sets))
    # ^ Needed because sets change all the time, bc sets lolz

    currSet = list(sets)
    print(fullLaziness(len(currSet), sets))
    
    bruhFull = "char flag[] = "

    for char in flag:
        idx = currSet.index(char)
        bruhFull += f"{varTemplate(idx)} + "


    print(bruhFull)

def yata():
    pass


if __name__ == "__main__":
    try: 
        i = sys.argv[1]

        chad_string_shatter_method(i)

    except Exception as err:
        print(f"ERR: {err}{endLine}You may have not written a command line argument so default will run:{endLine}")
        chad_string_shatter_method(FLAG) 

"""
python3 -c 'i = input();stFlag = lambda  x: f"strncat(flag, &text[{x}], 1);";  lst = i.split("] + text["); [ print(stFlag(yee)) for yee in lst ]'
"""




