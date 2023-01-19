package Services;

public class AlignCenter implements AlignStrategy {

    @Override
    public void render(String paragraph) {
        System.out.println("Models.Paragraph:       " + paragraph);
    }
}
