import java.util.Scanner;

class Imitation_Game
{
    public static boolean imitation_test(String human_answer, String machine_answer)
    {
        if (human_answer.equals(machine_answer))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Human Answer and Machine Answer");
        String human_answer = sc.nextLine();
        String machine_answer = sc.nextLine();
        if(imitation_test(human_answer, machine_answer)){
            System.out.println("Imitation Test Passed");
        }
        else{
            System.out.println("Imitation Test Failed");
        }
        sc.close();
    }
}
