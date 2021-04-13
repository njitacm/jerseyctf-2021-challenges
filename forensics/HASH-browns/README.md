# HASH-browns
* Get the decimal sum of the last 4 digits of all each file from an hash. They were talking about something pertains to md as the hash.

## Solution 
```bash
openssl md5 file* | awk '{print $2}' | python3 -c 'import sys;data = sys.stdin.read(); print(sum([int(f"{line[-4:]}", 16) for line in data.split("\n") if line != ""]))'
```


--- 

## Challenge Message 
Before you can start your day, you must eat breakfast. Not just any ordinary breakfast though — hash browns fit for a hero! While eating your hashbrowns, you must get the decimal sum of the last 4 digits of all each file from your virtual breakfast in order to properly digest your breakfast and awaken your superpowers. This breakfast is md(mmmmm) good

## Challenge Hints
* Did you convert it from hex to decimal? And did you make sure to get only the last 4 digits? Also make sure it is between the jctf{} flag formatter.
