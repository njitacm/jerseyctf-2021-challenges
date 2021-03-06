package main

import (
	"fmt"
	"log"
	"net/http"
)

func getFlag(w http.ResponseWriter, r *http.Request) {

	if r.Method != http.MethodPost {
		fmt.Fprintf(w, "POST UP BROTENDO\n")
		return
	}

	fmt.Fprintf(w, "jctf{P0st_M3th0ds_4re_c0ol_broTendo}\n")

}

func main() {
	http.HandleFunc("/", getFlag)

	if err := http.ListenAndServe(":8000", nil); err != nil {
		log.Fatal(err)
	}

}
