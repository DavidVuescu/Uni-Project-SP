package Main.Models;

import Main.Services.Visitor;
import java.util.concurrent.TimeUnit;

public class Image implements Element {
    private String name;
    private String url;

    public Image(String name) {
        this.name = name;
        try {
            TimeUnit.SECONDS.sleep(5);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public void print() {
        System.out.println("Main.Models.Image with name: " + name);
    }

    public void add(Element e) {}
    public void remove(Element e) {}
    public Element get(int index){
        return null;
    }

    public void accept(Visitor visitor) {
        visitor.visitImage(this);
    }
}
