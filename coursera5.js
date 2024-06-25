
class Cake {
    constructor(lyr) {
        this.layers = lyr + 1;
    }
}

var result = new Cake(1);
console.log(result.layers);
