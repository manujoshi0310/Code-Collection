import java.io._

class Point(val xc: Int, val yc: Int){
    var x: Int = xc
    var y: Int = yc
    def move(dx: Int, dy:Int){
        x = x + dx
        y = y + dy
        println("Point location of X: "+x);
        println("Point location of Y: "+y);
    }
}

object Demo{
    def main(args: Array[String]){
        val pt = new Point(10,20);

        pt.move(10,10);
    }
}