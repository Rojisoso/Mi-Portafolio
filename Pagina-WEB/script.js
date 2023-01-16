//Variables

let menuvisible = false;


//Funciones
function mostrarocultarmenu(){
    if(menuvisible){
        document.getElementById("nav").classList ="";
        menuvisible =false;
    }
    else{
        document.getElementById("nav").classList ="responsive";
        menuvisible =true;
    }
}

function seleccionar(){
    document.getElementById("nav").classList = "";
    menuvisible = false;
}

function efecto(){
    var skills = document.getElementById("skills");
    var distancia = window.innerHeight - skills.getBoundingClientRect().top;
    if(distancia >= 300){
        let habilidades = document.getElementsByClassName("progreso");
        habilidades[0].classList.add("swift");
        habilidades[1].classList.add("swiftui");
        habilidades[2].classList.add("python");
        habilidades[3].classList.add("c");
        habilidades[4].classList.add("ccc");
        habilidades[5].classList.add("cc");
        habilidades[6].classList.add("objc");
        habilidades[7].classList.add("htmlcss");
        habilidades[8].classList.add("mysql");
    }
}

window.onscroll = function(){
    efecto();
}

