# exec
* Run the executable

## Solution
* Be sure to be running a 64 bit architecture and on a Linux Distro
`./exec` should work if you are in the same directory as exec executable

* The `rand-obfusc.py` is needed to make sure that the utility `strings` won't break this challenge (and somewhat makes it more difficult)
    * Run for some C Code generation

`jctf{ran_an_ELF_Ex3cutable}`

---

## Challenge Message
Your superhero coworker is asking for your assistance with rescuing a 64-year-old elderly woman’s pet cat from an executable file that won’t open. (Apparently the fire department only helps with cats stuck in trees.) Save the cat by finding a way to run the executable file!

## Challenge Hints
* Do it the easy way for less pain
* Executables depend on a lot of things: architecture, OS, language, and libraries.
