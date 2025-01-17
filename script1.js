document.addEventListener('DOMContentLoaded', function () {
    const colorValues = {
        black: 0,
        brown: 1,
        red: 2,
        orange: 3,
        yellow: 4,
        green: 5,
        blue: 6,
        violet: 7,
        grey: 8,
        white: 9
    };

    function calculateResistance() {
        const banda1 = document.getElementById('banda1').value;
        const banda2 = document.getElementById('banda2').value;
        const banda3 = document.getElementById('banda3').value;
      
      
        const value1 = colorValues[banda1];
        const value2 = colorValues[banda2];
        const multiplier = Math.pow(10, colorValues[banda3]);

        const resistanceValue = (value1 * 10 + value2) * multiplier;

        document.getElementById('valorResistencia').value = resistanceValue + ' Ω';
    }

    document.getElementById('banda1').addEventListener('change', calculateResistance);
    document.getElementById('banda2').addEventListener('change', calculateResistance);
    document.getElementById('banda3').addEventListener('change', calculateResistance);

    // Ejecutar la función al cargar la página para pintar la resistencia inicialmente
    calculateResistance();
});
console.log("hola");