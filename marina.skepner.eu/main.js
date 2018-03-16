$(document).ready(function() {
    fix_menu();
    create_sidebar();
    $( window ).resize(window_resized);
    window_resized();
});

function fix_menu()
{
    $('.masthead').visibility({
        once: false,
        onBottomPassed: function() {
            $('.fixed.menu').transition('fade in');
        },
        onBottomPassedReverse: function() {
            $('.fixed.menu').transition('fade out');
        }
    });
}

function create_sidebar()
{
    $('.ui.sidebar').sidebar('attach events', '.toc.item');
}

var sLabels = {
    email_address: "zuskepner@gmail.com",
    email: "Maile mir",
    phone: "+49 152 33605790",
    call: "Ruf mich an"
};

var sDevTargets = {
    vmob: {
        email: sLabels.email,
        phone: sLabels.call
    },
    "vdesk": {
        email: sLabels.email_address,
        phone: sLabels.phone
    },
    "hmobile": {
        email: sLabels.email_address,
        phone: sLabels.phone
    },
    "hdesk": {
        email: sLabels.email_address,
        phone: sLabels.phone
    }
};

function window_resized()
{
    var w = $(window).width();
    var target = "unknown";
    if (w < $(window).height()) {
        if (w < 450)
            target = "vmob";
        else
            target = "vdesk";
    }
    else {
        if (w < 450)
            target = "hmobile";
        else
            target = "hdesk";
    }
    set_target(target);
}


function set_target(target_name)
{
    $('body').removeClass(Object.keys(sDevTargets).join(" "));
    $('body').addClass(target_name);
    var target = sDevTargets[target_name];
    $('#email').text(target.email);
    $('#phone').text(target.phone);

    // $('.top.main.fixed .item').addClass("tiny");

    // $("#top-bar").addClass("tiny");
    // $("#top-bar .item").addClass("tiny");
}

// function set_vertical_desktop()
// {
//     $('body').removeClass("vertical-mobile horizontal-mobile horizontal-desktop");
//     $('body').addClass("vertical-desktop");
//     $("#top-bar").removeClass("tiny");
// }

// function set_horizontal_mobile()
// {
//     $('body').removeClass("vertical-mobile vertical-desktop horizontal-desktop");
//     $('body').addClass("horizontal-mobile");
//     $("#top-bar").addClass("tiny");
// }

// function set_horizontal_desktop()
// {
//     $('body').removeClass("vertical-mobile vertical-desktop horizontal-mobile");
//     $('body').addClass("horizontal-desktop");
//     $("#top-bar").removeClass("tiny");
// }
