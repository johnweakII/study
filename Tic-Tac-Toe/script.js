let canvas= []
let rows = 3;
let columns = 3;

let gameOver=false;

let player=1;
let p1 = "O";
let p2 = "X";

window.onload = function() {
    startGame();
}

function startGame() {

    for (let r = 0; r < rows; r++) {
        let row = [];
        for (let c = 0; c < columns; c++) {
            let tile = document.createElement("div");
            tile.id = r.toString() + "-" + c.toString();
            tile.addEventListener("click", setplayer);
            document.getElementById("canvas").append(tile);
            row.push(tile);
        }
        canvas.push(row);
    }
    console.log(canvas);
    setplayer();
    
}

function setplayer() {
    if (gameOver) {
        return;
    }
    let tile = this;
    if (player == 0) {
        if (tile.innerText == "") {
            tile.innerText = "O";
        }
        player+=1;
        
    }
    else {
        player == 1;
        if (tile.innerText == "") {
            tile.innerText = "X";
        }
        player-=1;
        
    }
    checkwinner();
    return;
}

function checkwinner()
{

if(p1 == document.getElementById("0-0").innerText &&     
 p1 == document.getElementById("0-1").innerText  &&    
 p1 == document.getElementById("0-2").innerText || 
 p1 == document.getElementById("1-0").innerText &&     
 p1 == document.getElementById("1-1").innerText  &&    
 p1 == document.getElementById("1-2").innerText ||
 p1 == document.getElementById("2-0").innerText &&     
 p1 == document.getElementById("2-1").innerText  &&    
 p1 == document.getElementById("2-2").innerText ||
 p1 == document.getElementById("0-0").innerText &&     
 p1 == document.getElementById("1-0").innerText  &&    
 p1 == document.getElementById("2-0").innerText ||
 p1 == document.getElementById("0-1").innerText &&     
 p1 == document.getElementById("1-1").innerText  &&    
 p1 == document.getElementById("2-1").innerText ||
 p1 == document.getElementById("0-2").innerText &&     
 p1 == document.getElementById("1-2").innerText  &&    
 p1 == document.getElementById("2-2").innerText ||
 p1 == document.getElementById("0-0").innerText &&     
 p1 == document.getElementById("1-1").innerText  &&    
 p1 == document.getElementById("2-2").innerText ||
 p1 == document.getElementById("0-2").innerText &&     
 p1 == document.getElementById("1-1").innerText  &&    
 p1 == document.getElementById("2-0").innerText) {
    document.getElementById("gamewinner").innerText = "PLAYER 1 WINS!";
    gameOver = true;
    return 0;
}

if(p2 == document.getElementById("0-0").innerText &&     
 p2 == document.getElementById("0-1").innerText  &&    
 p2 == document.getElementById("0-2").innerText || 
 p2 == document.getElementById("1-0").innerText &&     
 p2 == document.getElementById("1-1").innerText  &&    
 p2 == document.getElementById("1-2").innerText ||
 p2 == document.getElementById("2-0").innerText &&     
 p2 == document.getElementById("2-1").innerText  &&    
 p2 == document.getElementById("2-2").innerText ||
 p2 == document.getElementById("0-0").innerText &&     
 p2 == document.getElementById("1-0").innerText  &&    
 p2 == document.getElementById("2-0").innerText ||
 p2 == document.getElementById("0-1").innerText &&     
 p2 == document.getElementById("1-1").innerText  &&    
 p2 == document.getElementById("2-1").innerText ||
 p2 == document.getElementById("0-2").innerText &&     
 p2 == document.getElementById("1-2").innerText  &&    
 p2 == document.getElementById("2-2").innerText ||
 p2 == document.getElementById("0-0").innerText &&     
 p2 == document.getElementById("1-1").innerText  &&    
 p2 == document.getElementById("2-2").innerText ||
 p2 == document.getElementById("0-2").innerText &&     
 p2 == document.getElementById("1-1").innerText  &&    
 p2 == document.getElementById("2-0").innerText) {
    document.getElementById("gamewinner").innerText = "PLAYER 2 WINS!";
    gameOver = true;
    return 0;
}

}     
    