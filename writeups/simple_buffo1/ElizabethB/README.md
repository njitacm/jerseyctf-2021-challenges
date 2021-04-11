
# ElizabethB's Write-up for simple_buffo1

1. Run the file to see a password is required:
```
$ ./simple1
Enter the password: <random-password-here>

Wrong Password
```

2. Run ```strings``` on the file to look for conspicuous strings that could be the password:
```
$ strings simple1
```
3. Scroll up to see the section that handles the password:
```
...
Enter the password:
yeetOReeNo
Wrong Password
Correct Password
...
```
```yeetOReeNo``` seems like a conspicuous string that is not seen elsewhere in the running program. 

4. Test to see if this could be the password:
```
$ ./simple1
Enter the password:yeetOReeNo
Correct Password
jctf{gets_is_vDangerous}
```

