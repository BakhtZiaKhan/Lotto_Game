$( document ).ready(function() {
    "use strict";
    
	var _slider 		= $('#slider');
	var _menuControls 	= $('#chm-slider-left-menu-controls');
	var _openMenu 		= $('#chm-slider-menu-open');
	var _chmLogo 		= $('#chm-slider-menu-logo');
	var _bgColor 		= $('.slider').css('background-color');
	
	var winWidth = $( window ).width(); //retrieve current window width
	var _controlsOpened = '4px';
	var _controlsClosed = (winWidth >= 768) ? '-105px' : '-95px';
	
	
	
	// slider nav menu elements
    _menuControls.on("click", function(){
		$(this).menuHandler();
    });
	
    
    _slider.on("click", function(){
		if($(this).hasClass('slide') === true){
            closeSlider();
        }
    });
	
    
    
    // =============================================================================================================
	//
	// FUNCTIONS 
	//
    // =============================================================================================================
	
	$.fn.menuHandler = function() {
		
		if(_openMenu.hasClass("is-active") === true){
            closeSlider();
		} else {
			openSlider();
		}
	};
    
    
    function openSlider(){
		_chmLogo.fadeOut(100, function(){
			_slider.addClass('slide', 250);
			_menuControls.animate({right: _controlsOpened}, 100).css('background-color', 'transparent');
			_openMenu.addClass("is-active", 100);
		});
    }
    
    
    function closeSlider(){
    	_slider.removeClass('slide', 250);
		_menuControls.css('background-color', _bgColor).animate({right: _controlsClosed}, 100, function(){
			_openMenu.removeClass("is-active", 100);
			_chmLogo.fadeIn(100);			
		});
    }
});
       

