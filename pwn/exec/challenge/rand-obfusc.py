import sys

FLAG = "jctf{ran_an_ELF_Ex3cutable}"
endLine = "\n"
def cringe_strings_vulnerable_method(flag):
    retStr = "{'"
    retStr += "\','".join(list(flag))
    retStr += "'}"
    # print(retStr, len(flag))
    return retStr

printfTemplate = lambda x: f'printf("%c", smol_compress[{x}]);'
fullLaziness = lambda length, values : f"char smol_compress[{length}] = {values};"


# Does a quick compression to get past the age old and clever `strings` command 
def chad_string_shatter_method(flag):
    sets = set(flag)

  
    # print(sets, len(sets))
    # ^ Needed because sets change all the time, bc sets lolz

    currSet = list(sets)
    print(fullLaziness(len(currSet), sets))
    
    for char in flag:
        idx = currSet.index(char)
        print(printfTemplate(idx))


if __name__ == "__main__":
    try: 
        i = sys.argv[1]

        chad_string_shatter_method(i)

    except Exception as err:
        print(f"ERR: {err}{endLine}You may have not written a command line argument so default will run:{endLine}")
        chad_string_shatter_method(FLAG) 

        

    

