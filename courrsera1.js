class Train{
    constructor(color, light){
        this.color=color;
        this.light=light;
    }
    changeColor(newc){
        this.color=newc;
    }
    flicker(){
        this.light= !this.light;
    }
    getProto(){
        var proto=Object.getPrototypeOf(this);
        console.log(proto);
    }
}

var t1=Object.create(Train);
t1.light=false;
t1.color="purple"
//console.log(t1);

var t2=new Train("Red",false);
var t3=new Train("Blue",true);
t3.changeColor("Ayush")
t3.flicker();
//console.log(t2,"\t",t3);
//t3.getProto();

class Metro extends Train{
    constructor(pass, speed, color, light){
        super(color,light);
        this.pass=pass;
        this.speed=speed;
    }
    speedup(){
        this.speed+=10;
    }
    getProto(){
        var proto=Object.getPrototypeOf(this);
        console.log(proto);
    }
}

var m1=new Metro(200,20,"red",true);
console.log(m1);
m1.speedup(); 
m1.flicker();
m1.changeColor("Magenta") //INHERITED FROM SUPER CLASS
console.log(m1);
m1.getProto()














