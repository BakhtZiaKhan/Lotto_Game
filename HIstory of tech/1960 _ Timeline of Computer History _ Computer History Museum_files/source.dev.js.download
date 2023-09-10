"use strict";(function e(t,n,r){function s(o,u){if(!n[o]){if(!t[o]){var a=typeof require=="function"&&require;if(!u&&a)return a(o,!0);if(i)return i(o,!0);var f=new Error("Cannot find module '"+o+"'");throw f.code="MODULE_NOT_FOUND",f;}var l=n[o]={exports:{}};t[o][0].call(l.exports,function(e){var n=t[o][1][e];return s(n?n:e);},l,l.exports,e,t,n,r);}return n[o].exports;}var i=typeof require=="function"&&require;for(var o=0;o<r.length;o++){s(r[o]);}return s;})({1:[function(require,module,exports){
(function(global){
/* eslint-env browser */
'use strict';

var _jquery=typeof window!=="undefined"?window['jQuery']:typeof global!=="undefined"?global['jQuery']:null;var _jquery2=_interopRequireDefault(_jquery);

var _socialShare=require('modules/socialShare.js');var _socialShare2=_interopRequireDefault(_socialShare);

var _custom=require('modules/custom.js');var _custom2=_interopRequireDefault(_custom);
var _hamburger=require('modules/hamburger.js');var _hamburger2=_interopRequireDefault(_hamburger);function _interopRequireDefault(obj){return obj&&obj.__esModule?obj:{default:obj};}// import carousel from 'modules/carousel.js';

(function($){
// Prepare form inputs
// prepInputs();
// Initialize social share functionality
// Replace the empty string parameter with your Facebook ID
(0,_socialShare2.default)('');

// Initialize carousels
// carousel();

(0,_custom2.default)();

(0,_hamburger2.default)();

// // Initialize Plugins
// $('.magnific-trigger').magnificPopup({
//   type: 'inline',
// });

// $('.meerkat-cta').meerkat({
//   background: 'rgb(21, 76, 102) repeat-x left top',
//   height: '120px',
//   width: '100%',
//   position: 'bottom',
//   close: '.close-meerkat',
//   dontShowAgain: '.dont-show',
//   animationIn: 'fade',
//   animationSpeed: 500,
//   opacity: 0.9,
// });
})(_jquery2.default);// import prepInputs from 'modules/prepinputs.js';

}).call(this,typeof global!=="undefined"?global:typeof self!=="undefined"?self:typeof window!=="undefined"?window:{});

},{"modules/custom.js":2,"modules/hamburger.js":3,"modules/socialShare.js":4}],2:[function(require,module,exports){
(function(global){
/* eslint-env browser */
'use strict';Object.defineProperty(exports,"__esModule",{value:true});

var _jquery=typeof window!=="undefined"?window['jQuery']:typeof global!=="undefined"?global['jQuery']:null;var _jquery2=_interopRequireDefault(_jquery);function _interopRequireDefault(obj){return obj&&obj.__esModule?obj:{default:obj};}

var custom=function custom(){
// $('.mobile-menu-toggle span.open').click(function () {
//   if ($(window).width() < 1024) {
//     $('.nav-section-bottom').addClass('active');
//     $('.mobile-menu-toggle span.close').removeClass('hide');
//     $('.mobile-menu-toggle span.open').addClass('hide');
//   }
// });

// $('.mobile-menu-toggle span.close').click(function () {
//   if ($(window).width() < 1024) {
//     $('.nav-section-bottom').removeClass('active');
//     $('.mobile-menu-toggle span.open').removeClass('hide');
//     $('.mobile-menu-toggle span.close').addClass('hide');
//   }
// });

// $(window).resize(function () {
//   if ($(window).width() > 1024) {
//     $('.nav-section-bottom').removeClass('active');
//     $('.mobile-menu-toggle span.open').removeClass('hide');
//     $('.mobile-menu-toggle span.close').addClass('hide');
//   }
// });

// Sticky menu
(0,_jquery2.default)(window).scroll(function(){
if((0,_jquery2.default)(window).width()>1024&&(0,_jquery2.default)(window).scrollTop()>100){
(0,_jquery2.default)('.nav-section-top .logo').addClass('active');
(0,_jquery2.default)('.nav-section-top-menu').addClass('hide');
(0,_jquery2.default)('.nav-section-bottom').addClass('sticky');
}else{
(0,_jquery2.default)('.nav-section-top .logo').removeClass('active');
(0,_jquery2.default)('.nav-section-top-menu').removeClass('hide');
(0,_jquery2.default)('.nav-section-bottom').removeClass('sticky');
}
});

// Stop event propergation when user clicks search wrapper
(0,_jquery2.default)('.search-wrapper').on('click',function(e){
e.stopPropagation();
});

// Open search
(0,_jquery2.default)('.search-icon').on('click',function(e){
e.stopPropagation();
(0,_jquery2.default)('.search-wrapper').addClass('active');
(0,_jquery2.default)('.search-icon').addClass('active');
});

// close search when user clicks out
(0,_jquery2.default)(window).on('click',function(){
(0,_jquery2.default)('.search-wrapper').removeClass('active');
(0,_jquery2.default)('.search-icon').removeClass('active');
});

/**
       * Footer Signup form validation
       */
(0,_jquery2.default)('#mc-embedded-subscribe').on('click',function(){
if((0,_jquery2.default)('#mce-FNAME').val()==''){
(0,_jquery2.default)('#mce-FNAME').addClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-FNAME').html('This field is required.');
}else{
(0,_jquery2.default)('#mce-FNAME').removeClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-FNAME').html('');
}
if((0,_jquery2.default)('#mce-LNAME').val()==''){
(0,_jquery2.default)('#mce-LNAME').addClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-LNAME').html('This field is required.');
}else{
(0,_jquery2.default)('#mce-LNAME').removeClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-LNAME').html('');
}
if((0,_jquery2.default)('#mce-EMAIL').val()==''){
(0,_jquery2.default)('#mce-EMAIL').addClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-EMAIL').html('This field is required.');
}else{
(0,_jquery2.default)('#mce-EMAIL').removeClass('wpcf7-not-valid');
(0,_jquery2.default)('.form-inline-error.mce-EMAIL').html('');
}

if((0,_jquery2.default)('#mce-FNAME').val()==''||(0,_jquery2.default)('#mce-LNAME').val()==''||(0,_jquery2.default)('#mce-EMAIL').val()==''){
(0,_jquery2.default)('#mce-error-response').hide();
}else{
(0,_jquery2.default)('#mce-error-response').show();
}

});

// Prevent click on main menu item of hamburger menu
(0,_jquery2.default)('ul').siblings('a').on('click',function(e){
e.preventDefault();
});

// success on footer signup form
var wpcf7Elm=document.querySelector('.wpcf7');
if(wpcf7Elm){
wpcf7Elm.addEventListener('wpcf7mailsent',function(event){
console.log(event);
(0,_jquery2.default)('.form-button-wrapper').addClass('submission-success');
(0,_jquery2.default)('.form-button-wrapper input').attr('disabled',true);
(0,_jquery2.default)('.wpcf7-form .title h2').html("You're in the loop");
},false);
}
};exports.default=

custom;

}).call(this,typeof global!=="undefined"?global:typeof self!=="undefined"?self:typeof window!=="undefined"?window:{});

},{}],3:[function(require,module,exports){
'use strict';Object.defineProperty(exports,"__esModule",{value:true});exports.default=



function(){
var winWidth=$(window).width(),
header=$('.header'),
toggler=$('.mobile-menu-toggle'),
mainNav=$('.nav-section-bottom'),
subNav=$('.nav__main-child');

/*
                                    If the window width is less than
                                    991px or equal, enable the function
                                    for hamburger menu toggle
                                    - Remove win width check as the hamburger 		
                                    needs to get initalized even if the screen is		
                                    big so in browser resize it will work
                                  */
if(toggler){
toggler.click(function(){
if(!$(this).hasClass('active')){
$(this).addClass('active');
$('.mobile-menu-toggle span').text('Close');
mainNav.slideDown();
}else{
$(this).removeClass('active');
$('.mobile-menu-toggle span').text('Menu');
mainNav.slideUp();
}
});

$('.nav__main ul > li.dropdown > div.down-drop-arrow').click(function(e){
e.preventDefault();

if(!$(this).next().hasClass('show')){
subNav.slideUp();
subNav.removeClass('show');
$('.nav__main ul > li.dropdown').removeClass('dropdown-active');
$(this).parent().addClass('dropdown-active');
$(this).next().slideDown();
$(this).next().addClass('show');
}else{
$(this).parent().removeClass('dropdown-active');
$(this).next().slideUp();
$(this).next().removeClass('show');
}
});

lastScrollTop=0;
$(window).scroll(function(event){
var st=$(this).scrollTop();
if(st>lastScrollTop){
// Scroll Down
if(st>80){
header.addClass('header-fill');
}
}

// Top most of the page
if(st==0){
header.removeClass('header-fill');
}
lastScrollTop=st;
});
}

/*
      If the window width is greater than
      1024px shrink and change the colour
      of the header.
    */
if(winWidth>=1024&&header){
var lastScrollTop=0;

$(window).scroll(function(event){
var st=$(this).scrollTop();
if(st>lastScrollTop){
// Scroll Down
if(st>100){
header.addClass('snap-up');
}
}else{
// Scroll Up
header.removeClass('snap-up');
header.addClass('shrink');
}

// Top most of the page
if(st==0){
header.removeClass('snap-up, shrink');
}
lastScrollTop=st;
});
}
};

},{}],4:[function(require,module,exports){
(function(global){
/* eslint-env browser */
'use strict';Object.defineProperty(exports,"__esModule",{value:true});

var _jquery=typeof window!=="undefined"?window['jQuery']:typeof global!=="undefined"?global['jQuery']:null;var _jquery2=_interopRequireDefault(_jquery);function _interopRequireDefault(obj){return obj&&obj.__esModule?obj:{default:obj};}

var socialShare=function socialShare(fbId){
var $body=(0,_jquery2.default)('body');

// Facebook sharing with the SDK
_jquery2.default.getScript('//connect.facebook.net/en_US/sdk.js').done(function(){
$body.on('click.sharer-fb','.sharer-fb',function(e){
var $link=(0,_jquery2.default)(e.currentTarget);
var options={
method:'feed',
display:'popup'};

var newUrl=$link.data('redirect-to')?
$link.data('redirect-to'):null;

e.preventDefault();

window.FB.init({
appId:fbId,
xfbml:false,
version:'v2.0',
status:false,
cookie:true});


if($link.data('title')){
options.name=$link.data('title');
}

if($link.data('url')){
options.link=$link.data('url');
}

if($link.data('picture')){
options.picture=$link.data('picture');
}

if($link.data('description')){
options.description=$link.data('description');
}

window.FB.ui(options,function(response){
if(newUrl){
window.location.href=newUrl;
}
});
});
});

// Twitter sharing
$body.on('click.sharer-tw','.sharer-tw',function(e){
var $link=(0,_jquery2.default)(e.currentTarget);
var url=$link.data('url');
var text=$link.data('description');
var via=$link.data('source');
var twitterURL='https://twitter.com/share?url='+encodeURIComponent(url);

e.preventDefault();

if(text){
twitterURL+='&text='+encodeURIComponent(text);
}
if(via){
twitterURL+='&via='+encodeURIComponent(via);
}
window.open(twitterURL,'tweet',
'width=500,height=384,menubar=no,status=no,toolbar=no');
});

// LinkedIn sharing
$body.on('click.sharer-li','.sharer-li',function(e){
var $link=(0,_jquery2.default)(e.target);
var url=$link.data('url');
var title=$link.data('title');
var summary=$link.data('description');
var source=$link.data('source');
var linkedinURL='https://www.linkedin.com/shareArticle?mini=true&url='+
encodeURIComponent(url);

e.preventDefault();

if(title){
linkedinURL+='&title='+encodeURIComponent(title);
}else{
linkedinURL+='&title=';
}

if(summary){
linkedinURL+='&summary='+
encodeURIComponent(summary.substring(0,256));
}

if(source){
linkedinURL+='&source='+encodeURIComponent(source);
}

window.open(linkedinURL,'linkedin',
'width=520,height=570,menubar=no,status=no,toolbar=no');
});
};exports.default=

socialShare;

}).call(this,typeof global!=="undefined"?global:typeof self!=="undefined"?self:typeof window!=="undefined"?window:{});

},{}]},{},[1]);