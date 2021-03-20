# Code modified from https://github.com/CrypTools/RailfenceCipher
def encode(text, key):
    fence = ["" for i in range(key)]
    rail  = 0
    var   = 1

    for char in text:
        fence[rail] += char
        rail += var

        if rail == key-1 or rail == 0:
            var = -var
    
    return "".join(fence)



# https://github.com/CrypTools/RailfenceCipher/blob/master/py/decrypt.py
def decrypt(s,n):
    fence = [[] for i in range(n)]
    rail  = 0
    var   = 1

    for char in s:
        fence[rail].append(char)
        rail += var

        if rail == n-1 or rail == 0:
            var = -var

    rFence = [[] for i in range(n)]

    i = 0
    l = len(s)
    s = list(s)
    for r in fence:
        for j in range(len(r)):
            rFence[i].append(s[0])
            s.remove(s[0])
        i += 1

    rail = 0
    var  = 1
    r = ''
    for i in range(l):
        r += rFence[rail][0]
        rFence[rail].remove(rFence[rail][0])
        rail += var

        if rail == n-1 or rail == 0:
            var = -var

    return r




# Ensure that the text being encoded does not have a space character
if __name__ == "__main__":

    msg = "jctf{r41lf3nc30rZ1gZ4gC1ph3r}"
    key = 4

    flag = encode(f"{msg}", key)
    solved = decrypt(flag, key)
    print(f"flag = {flag}")
    print(f"msg  = {msg}")
    print(f"flag = {solved} (but solved)")


