package main
import  (     "fmt"
              "time"                
)
func main(){
	i := 0
	startTime := time.Now() 
	for i < 100000{
		i += 1
	}
	endTime := time.Now()
	fmt.Println(endTime.Sub(startTime))
	
}

