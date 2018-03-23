$(document).ready(function() {
    fix_menu();
    create_sidebar();
    $(window).resize(window_resized);
    window_resized();
    // $("iframe").load(set_iframe);
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

// ----------------------------------------------------------------------

var sLabels = {
    email_address: "zuskepner@gmail.com",
    email: "Maile mir",
    phone: "+49 152 33605790",
    call: "Ruf mich an"
};

// ----------------------------------------------------------------------

var sPages = {
    "portrait-drawing": {
        divs: [
            {img: "chloe-ricoh", cap: "portraets-auf-bestellung", divh: true},
            {img: "chloe-ricoh", cap: "portraits"}
        ]
    },
    "collage": {
    },
    "you-are-here": {
    },
    "cococolaboration": {
    },
    "das-bonner-buerger-buch": {
    },
    "ten-letters-to-artist": {
    },
    "my-endless-book": {
    },
    "a-chloe-a-day": {
    },
    "paintings-2012": {
    }
};

var sPage = "portrait-drawing";

// ----------------------------------------------------------------------

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
    set_top_menu();
    set_page();
}

function set_top_menu()
{
    $('body').removeClass(Object.keys(sDevTargets).join(" "));
    $('body').addClass(sDevTarget);
    var target = sDevTargets[sDevTarget];
    $('#email').text(target.email);
    $('#phone').text(target.phone);

    // $('.top.main.fixed .item').addClass("tiny");
    // $("#top-bar").addClass("tiny");
    // $("#top-bar .item").addClass("tiny");
}

function set_page()
{
    $("#page-top").height($("#top-menu").height());
    $("#page").empty();
    $(".whole-page caption").hide();

    var page_data = sPages[sPage];
    page_data.divs.forEach(function(element, element_no) {
        if (element_no)
            $("#page").append("<div class='img-separator'></div>");
        var img = $("<div class='page-img'><img src='" + element.img + "-" + sDevTarget[0] + "-1.78-414.jpg' width='" + $(window).width() + "'></div>").appendTo("#page");
        if (element.divh)
            img.css("height", ($(window).height() - $("#top-menu").height()) + "px");
        var img_pos = img.offset(), img_height = img.height();
        // console.log("img pos " + JSON.stringify(img_pos));
        var cap = $("#" + sPage + "_" + element.cap).css({top: img_pos.top + img_height, left: img_pos.left}).show();
        cap.css("top", cap.position().top - cap.height());
    });
}
