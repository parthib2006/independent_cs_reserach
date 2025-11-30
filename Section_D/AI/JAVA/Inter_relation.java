class AI
{
  public String goal()
   {
    return "Think like humans";
   }
}
class ML extends AI
{
  public String goal()
  {
    return "Find patterns in data, then predict the Future!";
  }
}
class DL extends ML
{
  public String goal()
  {
    return "Advanced Pattern recognition and Future predictictability such as data includes voices, musics, videos, BSONs.";
  }
}
class DS extends ML
{
   public String goal()
    {
      return "Data Cleaning, training, preservation, analysis, predictions.";
    }
}
class Inter_relation
{
    public static void main(String[] args)
    {
        AI ai = new AI();
        ML ml = new ML();
        DS ds = new DS();
        DL dl = new DL();
        System.out.println(ai.goal() + "\n" + ml.goal() + "\n" + dl.goal() + "\n" + ds.goal());
    }
}