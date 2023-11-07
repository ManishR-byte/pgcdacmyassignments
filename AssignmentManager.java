
package AssignmentForClass;

import java.util.Date;
import java.util.Scanner;
import java.util.Vector;


 class Student{
     String name;
     int prnNO;
    
    Student(String name, int prnNo){
        this.name=name;
        this.prnNO=prnNo;
    }
    
    void displayDetails(){
        System.out.println("The student name is: " +name);
        System.out.println("The student prnNO is: " +prnNO);
    }
    
}
class Trainer{
    String name;
    
    Trainer(String name){
        this.name=name;
    }
    void displayDetails(){
        System.out.println("The trainer Name is: " +name);
}
    
    
}
class Assignment{
//    private String Title;
//    private String Descrip;
//    public Assignment(String Title, String Descrip){
//        this.Title=Title;
//        this.Descrip=Descrip;
//    }
//    public String getTitle(){
//        return Title;
//    }
//    public String getDescrip(){
//        return Descrip;
//    }
//     public String toString(){
//        return "Title : "+Title+"Descrip: "+Descrip;
//    }
    String assign="Array Implementation";
   // String assignee=s1.display();
    Date d=new Date();
    String assignee;
//    String arr[]=dob.split("/");
//        
//       //for(String s:arr){
//           // System.out.println(s);
//         int d=Integer.parseInt(arr[0]);
//         int m=Integer.parseInt(arr[1]);
//         int y=Integer.parseInt(arr[2]);
    
    String description="Here we have to perform the basic searching and sorting algorithms on array";
    
    
    void assignment1(){
        //Scanner sc=new Scanner(System.in);
        System.out.println("The assignment title is: "+assign);
        System.out.println("Submitted on:"+d );
        System.out.println("Assignment description: " +description);
        //assign=sc.next();
        
    }
//    void show(){
//        System.out.println("The assignment name is:"+assign);
//    }
  
}
    
    
    
    
public class AssignmentManager {
    
//    void showAssignment(){
//        
//       
//    }
    
    public static void main(String[] args) {
       
        
         //vector<Assignment> v=new vector<>();
         
        Student s1=new Student("Ravi",101);
        s1.displayDetails();
        
        Trainer t1=new Trainer("Mr john");
        t1.displayDetails();
        Assignment obj=new Assignment();
        obj.assignment1();
        //System.out.println(s1);
        //obj.show();
       
}
}
