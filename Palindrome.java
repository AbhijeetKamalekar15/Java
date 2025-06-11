public class Palindrome {

    public static boolean checkPlaindrome(String str){
        int i = 0;
        int j = str.length()-1;

        while(i<=j){
            if(str.charAt(i) != str.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    public static void main(String args[]){
        //s = "A man, a plan, a canal: Panama"
        String str = "race a car";
        String temp = "";

        for(int i=0;i<str.length();i++){
            if((str.charAt(i)>=65 && str.charAt(i)<=90) || (str.charAt(i)>=97 && str.charAt(i)<=122)){
                temp = temp + str.charAt(i);
            }
        }
        boolean ans = checkPlaindrome(temp.toLowerCase());
        System.err.println(ans);
    }
}
