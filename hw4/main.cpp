using namespace std;
#include <iostream>


class board {
  private:
  char a[9];
  public:
    board(){
        int k=49;
        for(int i=0;i<9;i++){
            a[i]=k++;
        }
    }
    
    void print_board(){
        int k =0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[k+j]<<" ";
            }
            k+=3;
            cout<<endl;
        } 
    }
    bool check(int n,char c){
        if(1<=n && n<=9 && a[n-1]!='X'&&a[n-1]!='O'){
            return true;
        }
        else{
            return false;
        }
    }
    void move(int n ,char c ){
        if(check(n,c)){
            a[n-1]=c;
        }
        print_board();
    }
    
    bool win_lose(char c){
        int k=0;
        for(int i=0;i<3;i++){
            if(a[0+k]==c && a[1+k]==c &&a[2+k]==c){
                return true;
            }
            k+=3;
        }
        for(int i =0;i<3;i++){
            if(a[i]==c && a[3+i]==c && a[6+i]==c){
                return true;
            }
        }
        if(a[0]==c && a[4]==c && a[8]==c){
            return true;
        }
        if(a[2]==c && a[4]==c && a[6]==c){
            return true;
        }
    }
  
    
};

class tic {
    private:
        board board_2;
    public:
        int player ;
        char symbol ;
        void start(){
            
        }
    
        
};
int main()
{   
   board board_1;
   board_1.print_board();
    
}
