# DeadRobin's Write-up for hidden-in-plain-sight-2

1. try to use cat and grep to find the flag i found two but they were fakes

   ```
   4fc53c8dee89f40f3c2969d8a282e24c519fadc7b9403aa711c91ab22830
   jcft{this-is-certaintly_a_flag_lolz}
   578c003ab8fd78b6d0967767c02b6b4f025fd7bc156b8d9edd068133cf42
   .
   .
   .
   177e89fad20fb65c007a8ca2skajdhf782337bjjctf23478f6a11c7cbf3b
   2345235jctf{defnNotAFlag}98127978719274891729347912794719279
   177e89fad20fb65c007a8ca2skajdhf782337bjjctf23478f6a11c7cbf3b
   ```

2. I though maybe the flag is base64 encoded because the files gives the impression that it is so i encoded the string `jctf` and searched for it

   ```bash
   $ echo "jctf" | base64
   amN0Zgo=
   $ cat flag.txt | grep -i "amN0Z" | base64 -d
   jctf{hips2-b64_c0mes_with_different_equals}
   ```

   