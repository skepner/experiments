$(document).ready(function() {
    fix_menu();
    create_sidebar();
    $(window).resize(window_resized);
    window_resized();
    $("iframe").load(set_iframe);
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

var sDevTarget = "hdesk";

function window_resized()
{
    var w = $(window).width();
    if (w < $(window).height()) {
        if (w < 450)
            sDevTarget = "vmob";
        else
            sDevTarget = "vdesk";
    }
    else {
        if (w < 450)
            sDevTarget = "hmobile";
        else
            sDevTarget = "hdesk";
    }
    set_target();
}


function set_target()
{
    $('body').removeClass(Object.keys(sDevTargets).join(" "));
    $('body').addClass(sDevTarget);
    var target = sDevTargets[sDevTarget];
    $('#email').text(target.email);
    $('#phone').text(target.phone);

    set_iframe();

    // $('.top.main.fixed .item').addClass("tiny");

    // $("#top-bar").addClass("tiny");
    // $("#top-bar .item").addClass("tiny");
}

function set_iframe()
{
    var iframe = $("iframe").contents();
    iframe.find('img.picture').width($(window).width());
}
