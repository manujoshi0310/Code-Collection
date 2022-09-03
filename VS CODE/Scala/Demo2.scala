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

class Location(override val xc: Int, override yc: Int, val zc: Int) extends Point(xc, yc){
    var z: Int = zc

    def move(dx: Int, dy: Int, dz: Int){
        x = x + dx
        y = y + dy
        z = z + dz
        println("Point location of X: "+x);
        println("Point location of Y: "+y);
        println("Point location of Z: "+z);
    }
}

object Demo{
    def main(args: Array[String]){
        val pt = new Location(10,20,15);

        pt.move(10,10,10);
    }
}