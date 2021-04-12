# sirTensor's Write-up for sim-worker

1. run the file in gdb
```
$ gdb ./sim-worker
```

2. Set breakpoint at 0x8001253
```
(gdb) b *0x8001235
```

3. Find out where our variable storing the amount of doge coins we have in the stack.
```
(gdb) x/4xw $sp
```

4. Modify our dogecoins by setting it such that it is greater than 10000000.
```
set *((int *) 0x7ffffffee5b8) = 10000001
```

5. ```continue``` our program and buy flag
```
jctf{TypesHaveOverflows}
```
