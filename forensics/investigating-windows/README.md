# investigating-windows

Find the SID of the user robbr using the Windows registry files provided.


## Solution

perl /usr/share/windows-resources/regripper/rip.pl -r /home/robbr/Documents/njctf/registry/software -p profilelist

Flag: jctf{S-1-5-21-1410353290-3892556988-1991803543-1001}


