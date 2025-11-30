class Forward_Chaining {

    public boolean isTrafficSlow(boolean response) {
        return response == true;
    }

    public boolean isRoadWet(boolean response) {
        return response == true;
    }

    public String isRain(boolean response) {

        // CORRECTED: method call syntax was wrong
        if (isTrafficSlow(isRoadWet(response))) {
            return "People will reach late because traffic is slow due to rain!";
        } else {
            return "People will not reach late!";
        }
    }
}


class Backward_Chaining {

    public boolean isTrafficSlow(boolean response) {
        return response == true;
    }

    public boolean isRoadWet(boolean response) {
        return response == true;
    }

    public String isManLate(boolean response) {

        // CORRECTED: missing parenthesis, incorrect logic
        if (isTrafficSlow(isRoadWet(response))) {
            return "Man is late due to rain!";
        } else {
            return "Man is not late due to rain.";
        }
    }
}


public class Chaining{

    public static void main(String[] args) {

        Forward_Chaining chain1 = new Forward_Chaining();
        Backward_Chaining chain2 = new Backward_Chaining();

        System.out.println(chain1.isRain(true));
        System.out.println(chain2.isManLate(true));
    }
}