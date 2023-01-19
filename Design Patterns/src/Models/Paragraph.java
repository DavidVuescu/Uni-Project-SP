package Models;

import Services.AlignStrategy;
import Services.Visitor;

public class Paragraph implements Element {
    private String text;
    private AlignStrategy alignStrategy;

    public Paragraph(String text) {this.text = text;}
    @Override
    public void print() {
        System.out.print("Models.Paragraph: ");
        if(alignStrategy != null) {
            alignStrategy.render(text);
        } else{
            System.out.println(text);
        }
    }

    public void add(Element e) {}
    public void remove(Element e) {}
    public Element get(int index) {return null;}
    public void setAlignStrategy(AlignStrategy strats) {alignStrategy = strats;}

    public void accept(Visitor visitor) {
        visitor.visitParagraph(this);
    }
}
