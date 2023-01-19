package Main.Services;
import Main.Models.*;

public interface Visitor {
    void visitBook(Book book);
    void visitSection(Section section);
    void visitParagraph(Paragraph paragraph);
    void visitImageProxy(ImgProxy imageProxy);
    void visitImage(Image image);
    void visitTable(Table table);
}
