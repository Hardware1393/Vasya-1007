public class OrganoidBrain {
    static {
        System.loadLibrary("VasyaCore"); 
    }

    public native void feedVasya(String food);
    public native String askQuestion(String question);
    public native double getDopamineLevel();
}