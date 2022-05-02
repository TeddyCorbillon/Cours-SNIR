
$(document).ready(function () {
    $('#codePostal').val("");
    console.log("ready");
    $('#villes').empty();
    $('#codePostal').change(remplirVilles2);
    $('#adresseIdentique').change(CheckBoxActive);
});


function remplirVilles() {
    $('#villes').empty();
    $.ajax({
        url: 'Public/traitementVille.php',
        data: $('#codePostal').serialize(),
        dataType: 'json',
        type: 'GET',
        success: function (lesVilles, textStatus, jqXHR)
        {
            $.each(lesVilles, function (key, val) {
                $('#villes').append('<option>' + val + '</option>');
            });
        },
        error: function (jqXHR, textStatus, errorThrown)
        {
            console.log("parametre : " + JSON.stringify(jqXHR));
            console.log("status : " + textStatus);
            console.log("erreur : " + errorThrown);
        }
    });
}

function remplirVilles2()
{
    var codePostal = $('#codePostal').val();
    $('#villes').empty();
    console.log("remplirVilles2");
    $.getJSON('../../Controleur/controleur.php',
            {
                action: 'remplirVilles',
                codePostal: codePostal
            })
            .done(function (data) {
                $.each(data, function (key, val) {
                    $('#villes').append('<option>' + val + '</option>');
                });
            })
            .fail(function (jqXHR, textStatus, errorThrown) {
                console.log("parametre : " + JSON.stringify(jqXHR));
                console.log("status : " + textStatus);
                console.log("erreur : " + errorThrown);
            });
}

function CheckBoxActive() {
    if (document.getElementById("adresseIdentique").checked == true)
    {
        $("#adresse").hide();
        $("#codePostal").hide();
        $("#villes").hide();
        //alert('la case est cochée');
    }


}
