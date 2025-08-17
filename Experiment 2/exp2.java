import java.util.*;
class exp2
{
    public static int power(int x,int y){
        int output=1;
        if(y==0){
            return 1;
        }
        while(y>0){
            if(y%2==0){
                x=x*x;
                y=y/2;
                
            }else{
                output=output*x;
                y--;
            } 
        }
        return output;
    }
    public static void main(String[] args) {
    int x=3,y=5;
    System.out.println("X is "+x);
    System.out.println("Y is "+y);
    System.out.println(power(x, y));


}
}