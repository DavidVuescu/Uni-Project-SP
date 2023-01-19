package Main.Services;

public class AlignRight implements AlignStrategy {

    @Override
    public void render(String paragraph) {
        System.out.println("Main.Models.Paragraph:             " + paragraph);
    }
}
