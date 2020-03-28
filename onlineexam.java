import java.util.*;

class TeacherAccount {
    String userName;
    String userPassword;
    TeacherAccount(String userName, String userPassword) {
        this.userName=userName;
        this.userPassword=userPassword;
    }
}

class StudentAccount{
    String userName;
    String userPassword;
    StudentAccount(String userName, String userPassword) {
        this.userName=userName;
        this.userPassword=userPassword;
    }
}

class ManageAccount{
    Vector<StudentAccount>studentAccounts=new Vector<>();
    Vector<TeacherAccount>teacherAccounts=new Vector<>();
    void signUp(String userName,String userPassword){
        studentAccounts.add(new StudentAccount(userName,userPassword));
        System.out.println("\u001B[32m"+"Account Created Successfully!"+"\u001B[0m");
    }
    void teacherSignUp(){
        teacherAccounts.add(new TeacherAccount("YousufJUniv","admin001"));
        teacherAccounts.add(new TeacherAccount("ShantoBUP","admin002"));
    }
    boolean studentLogin(String userName, String userPassword){
        boolean ok=false;
        for(StudentAccount it:studentAccounts)
        {
            if(it.userName.equals(userName) && it.userPassword.equals(userPassword))
            {
                ok=true;
                break;
            }
        }
        return ok;
    }
    boolean teacherLogin(String userName, String userPassword){
        boolean ok=false;
        for(TeacherAccount it:teacherAccounts)
        {
            if(it.userName.equals(userName) && it.userPassword.equals(userPassword))
            {
                ok=true;
                break;
            }
        }
        return ok;
    }
}

class QuestionSet{
    private String question;
    private String option1;
    private String option2;
    private String option3;
    private String option4;
    private int correctAns;
    QuestionSet(String question,String option1,String option2,String option3,String option4,int correctAns){
        this.question=question;
        this.option1=option1;
        this.option2=option2;
        this.option3=option3;
        this.option4=option4;
        this.correctAns=correctAns;
    }
    void showQuestion(){
        System.out.println(question);
        System.out.println("\t1. " + option1);
        System.out.println("\t2. " + option2);
        System.out.println("\t3. " + option3);
        System.out.println("\t4. " + option4);
    }
    boolean checkAns(int ans)
    {
        if(correctAns==ans) return true;
        else    return false;
    }
    int getCorrectAns(){
        return correctAns;
    }
}
class ExamSystem{
    Scanner in=new Scanner(System.in);
    Vector<QuestionSet>easyQuestionSets=new Vector<>();
    Vector<QuestionSet>mediumQuestionSets=new Vector<>();
    Vector<QuestionSet>hardQuestionSets=new Vector<>();
    void addQuestion(){
        boolean ok=true;
        while (ok)
        {
            System.out.print("Difficulity: 1.Easy   2.medium   3.hard :");
            int difficulity=in.nextInt();
            System.out.println("Enter Question: ");
            String question=in.nextLine();
            question+=in.nextLine();
            System.out.print("Enter Option 1: ");
            String option1=in.nextLine();
            //option1+=in.nextLine();
            System.out.print("Enter Option 2: ");
            String option2=in.nextLine();
            //option2+=in.nextLine();
            System.out.print("Enter Option 3: ");
            String option3=in.nextLine();
            //option3+=in.nextLine();
            System.out.print("Enter Option 4: ");
            String option4=in.nextLine();
            //option4+=in.nextLine();
            System.out.println("Enter Correct Answer: ");
            int correctAns=in.nextInt();
            switch(difficulity){
                case 1:
                    easyQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,correctAns));
                    break;
                case 2:
                    mediumQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,correctAns));
                    break;
                default:
                    hardQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,correctAns));
            }
            System.out.println("To exit press '0' ");
            System.out.println("To add more press '1' ");
            System.out.println("your choice: ");
            int choice=in.nextInt();
            if(choice==0)
            {
                System.out.println("Logging Out...");
                ok=false;
            }
        }
    }
    void defaultQuestion(){
        String question="Following code will result in: int num = 6.7?";
        String option1="Compilation Error";
        String option2="6.7";
        String option3="6";
        String option4="Runtime Error";
        easyQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,1));
         question="Choose the appropriate data type for this field: kindOfBird= parrot";
         option1="int";
         option2="string";
        option3="double";
        option4="float";
        easyQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,2));
        question="Choose the appropriate data type for this field: isSwimmer ";
         option1="String.";
         option2="Double";
        option3="Int";
        option4="Boolean";
        easyQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,4 ));
        question="Which is NOT a section of all types of loops ?";
         option1="Initialization";
         option2="The word while";
        option3="Test statement";
        option4="loop body";
        mediumQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,2));
        question="An array holds";
         option1="Similar value of same data type";
         option2="Differnt values of same data type";
        option3="Different values of different data types";
        option4="Similar value of Different data types";
        hardQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4, 1));
        question="A class cannot be declared:";
         option1="Public";
         option2="private";
        option3="static";
        option4="default";
        mediumQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,2 ));
        question="What is a member of a class";
         option1="A Sub-class";
         option2="A method";
        option3="an attribue";
        option4="attribute or method";
        hardQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4, 4));
        question="An object could be ...";
         option1="An Algorithm";
         option2="A data container";
        option3="Anything";
        option4="A program";
        hardQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4, 3));
        question="What is an assignment statement ?";
         option1="Adding a number to an int";
         option2="Assigning a value to a variable";
        option3="Assigning a multiplication";
        option4="Assigning a name to a variable";
        mediumQuestionSets.add(new QuestionSet(question,option1,option2,option3,option4,2));
    }
    void exam(int difficulity){
        int cnt=0,mark=0;
        boolean ar[] =new boolean[100];
        int br[] =new int[100];
        Vector<QuestionSet>questionSets=new Vector<QuestionSet>();
        switch (difficulity)
        {
            case 1:
                questionSets=easyQuestionSets;
                break;
            case 2:
                questionSets=mediumQuestionSets;
                break;
            case 3:
                questionSets=hardQuestionSets;
        }
        Collections.shuffle(questionSets);
        for(QuestionSet it:questionSets)
        {
            System.out.print(++cnt + ". ");
            it.showQuestion();
            System.out.println("Your Answer: ");
            int ans=in.nextInt();
            if(it.checkAns(ans)==true){
                ar[cnt]=true;
                mark++;
            }
            else{
                ar[cnt]=false;
                br[cnt]=it.getCorrectAns();
            }
        }
        System.out.println("You Have Got " + mark + " Mark out of " + cnt );
        for(int i=1;i<=cnt;i++)
        {
            if(ar[i]==true)
                System.out.println(i + "\u001B[32m"+" Correct answer."+"\u001B[0m");
            else
                System.out.println(i+"\u001B[31m"+" Wrong answer."+"\u001B[0m"+"\tcorrect answer: option "+ br[i]);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        ManageAccount manageAccount=new ManageAccount();
        ExamSystem examSystem= new ExamSystem();
        examSystem.defaultQuestion();
        manageAccount.teacherSignUp();
        System.out.println("Welcome to Online Examination System");
        boolean flag=true;
        while(flag){
            System.out.println("1. Log In Teacher account");
            System.out.println("2. Log In Student account");
            System.out.println("3. New user? Sign Up");
            int choice=in.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Username :");
                    String userName = in.next();
                    System.out.print("Password :");
                    String pass = in.next();
                    if (manageAccount.teacherLogin(userName, pass)) {
                        System.out.println("\u001B[32m"+"Login Successfull!!"+"\u001B[0m");
                        System.out.println("Welcome Sir,Do you want to add some question");
                        System.out.println("\t1. Yes");
                        System.out.println("\t2. No");
                        System.out.print("Your Choice: ");
                        int a=in.nextInt();
                        if(a==1)
                             examSystem.addQuestion();
                    }
                    else
                        System.out.println("\u001B[31m"+"Wrong Username or Password , Try Again"+"\u001B[0m");
                    break;
                case 2:
                    System.out.print("Username :");
                    userName = in.next();
                    System.out.print("Password :");
                    pass = in.next();
                    if (manageAccount.studentLogin(userName, pass)){
                        System.out.println("\u001B[32m"+"Login Successfull!!"+"\u001B[0m");
                        System.out.println("Do you want to start exam?");
                        System.out.println("\t1. Yes");
                        System.out.println("\t2. No");
                        System.out.print("Your Choice: ");
                        int x=in.nextInt();
                        if(x==1) {
                            System.out.println("Enter Difficulity:");
                            System.out.println("\t1. Easy");
                            System.out.println("\t2. Medium:");
                            System.out.println("\t3. Hard");
                            System.out.print("Your Choice: ");
                            int difficulity = in.nextInt();
                            examSystem.exam(difficulity);
                        }
                        else
                            System.out.println("Exiting... ");
                    }


                    else
                        System.out.println("\u001B[31m"+"Wrong Username or Password , Try Again"+"\u001B[0m");
                    break;
                case 3:
                    System.out.print("Enter Username: ");
                    userName = in.next();
                    System.out.print("Enter Password (6-18 character) : ");
                    pass = in.next();
                    if (pass.length() >= 6 && pass.length() <= 18)
                        manageAccount.signUp(userName, pass);
                    else
                        System.out.println("\u001B[31m"+"Password Length invalid , Try Again"+"\u001B[0m");
                    break;
            }
        }
    }
}
