//Nicholas Nojiri
//cecs 274
//October 5 2019

import javax.print.attribute.standard.Sides;
import java.util.Scanner;
import java.util.ArrayList;
public class pyramid {
   public static void main(String[]args){
       Scanner in = new Scanner(System.in);
       System.out.println("enter the number of rows you would like to input into the pyramid" );
       int rows = in.nextInt();

       ArrayList<Integer> values = new ArrayList<Integer>();
      
       display(rows);
       values.size();

   }

   public static int getweight(int r,int c) {
       if (r ==0 ){
           return 0;
       }
       else if (r == c) {//150
           return ((getweight(r - 1, 1) + 150) / 2);
       }
       else if(r==c-1){
           return ((getweight(r - 1, c - 1) + getweight(r - 1, c)) / 2);
          
       }
       else {
           return ((getweight(r-1,c) + getweight(r-1,c-1) +150) / 2 ) ;
       }
  
   }
  
     // int side = 150;
     // int middle = 300;
     // for(int i = 0; i <rows ;i++)//for the
     //     {
     //         for(int j = 0 ; j<= i;j++){
     //             if (j==0 || j == i-1){
   public static void display(int r) {


       for(int i = 0 ;i <r; i++){
