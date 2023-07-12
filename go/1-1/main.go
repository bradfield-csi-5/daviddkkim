package main

import "fmt"
import "strings"
import "os"

func main() {
	fmt.Println(strings.Join(os.Args[0:2], " "))
}
