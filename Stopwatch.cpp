// stopwatch by khushal sharma

#include <iostream>
#include<conio.h>
 #include<windows.h>

using namespace std;
void display_time(){
	
    cout<<"This a stopwatch";
    int hr=0,min=0,sec=0;
    
   while(true){
   	cout<<hr<<"  Hours :"<<min<<"  Minutes : "<<sec<<"  Seconds :";
        Sleep(1000);
    system("cls");
    Beep(900,100);
    sec++;
    
    if (sec==60){
        sec=0;
        min++;
    
    if (min==60){
        hr++;
        min=0;
        
    }    
    }
    
   }
}
int main()
{  display_time();
    return 0;
}