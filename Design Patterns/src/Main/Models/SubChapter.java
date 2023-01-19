package Main.Models;

import java.util.ArrayList;
import java.util.List;

public class SubChapter {
    private String name;
    private List<Element> elements = new ArrayList<>();

    public SubChapter(String name) {
        this.name = name;
    }

    public void createNewParagraph(String text) {
        Paragraph newParagraph = new Paragraph(text);
        elements.add(newParagraph);
    }

    public void createNewImage(String imageName) {
        Image newImage = new Image(imageName);
        elements.add(newImage);
    }

    public void createNewTable(String title) {
        Table newTable = new Table(title);
        elements.add(newTable);
    }

    public void print(){
        System.out.println("Subchapter: "+name);

        for(Element element:elements){
            element.print();
        }
    }
}
