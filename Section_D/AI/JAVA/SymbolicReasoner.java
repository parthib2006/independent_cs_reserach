import java.util.Scanner;

class SymbolicReasoner {
    public static String infer(String rule, String fact) {
        String[] parts = rule.split("->");
        String left_rule = parts[0].trim();
        String right_fact = parts[1].trim();

        if(left_rule.equals(fact)) {
            return right_fact;
        } else {
            return "0";
        }
    }
    public static void main(String[] args)
    {
        String Rule, Fact;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Symbolic Propositional Rule and then the Fact");
        Rule = sc.nextLine();
        Fact = sc.nextLine();
        System.out.println(infer(Rule, Fact));
        sc.close();
    }
}