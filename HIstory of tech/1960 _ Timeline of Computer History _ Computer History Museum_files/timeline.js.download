$( document ).ready(function() {
    "use strict";
    // Timeline Years Slider Navigation
    var minYear = $('#decadeNav .years a:first').text();
    var maxYear = $('#decadeNav .years a:last').text();
    var navByYear;
	
	
	
	$("#header").headroom({ offset: 70 });
    
		
	// sidr nav menu elements
	$('#chm-sidr-menu').sidr({
		// Callback when sidr opened
		onOpen: function () {
			$('#chm-sidr-menu-logo').fadeOut("fast");
			$('#chm-sidr-menu-open').toggleHandler();
		},
			
		// Callback when sidr closed 
		onClose: function () {
			$('#chm-sidr-menu-logo').fadeIn("fast");	
			$('#chm-sidr-menu-open').toggleHandler();
		}
	});


	$.scrollUp({
		scrollImg: true,
		scrollDistance: 500,
		scrollSpeed: 700,
		animationSpeed: 500
	});

	
    // Credits 
    $('#showcredites, #credits-title').click(function() {
		$("#credits").fadeToggle("slow"); 
        var _elemOffset = $("#credits").offset().top;
   		$('html,body').animate({scrollTop : _elemOffset}, "slow");

	});


	
	navByYear = slidr.create("decadeNav", {
		after: function(e) {			
			var in_id = e.in.el.id;
			$('.decade-nav li').removeClass("active");

			var current_decade = $(".decade-nav li[data-id='"+in_id+"']");
			current_decade.addClass("active");		   
		},  
		controls: false,
		breadcrumbs: false,
		overflow: true,
		timing: { 'cube': '0.8s ease-in' },
		transition: 'cube'
	});


	// 
	$('.decade-nav li').click(function() {
		var id = $(this).attr("data-id"); 
		navByYear.slide(id);
	});

	// Prev & Next Navigation
	$('.nav-circlepop .nav').click(function() {
		var id = $(this).attr("data-link"); 
		navByYear.slide(id);
		return false;
	});  



	
	
	// highlight current year
    // currentYear should be set based on the path of URL. Ex /1997/, /1946/
    // Parse window.location.pathname to get currentYear
	var pathname = window.location.pathname.split( '/' ); 
    var currentCategory = pathname[2] || undefined;
	var currentYear = parseInt(pathname[2]) || undefined;
	var requestedYear;
	
	if(isNaN(currentYear) || (currentYear < minYear)) {
		currentYear = minYear;
    } else if (currentYear > maxYear) {
		currentYear = maxYear;
    } else {
		currentYear = pathname[2];
		requestedYear = pathname[2];
    }
	
	
			
			
    $('.years').each(function() {
    	var thisYear = $(this).children().html();

    	// square dot to indicate current entry location
    	var currentHTML = "<div class='current'></div>";
		

    	if (thisYear === currentYear) {
        	$(this).addClass("currentyear");

            var parentID = $(this).parent().attr("id");
            var decadeNav = $(".decade-nav li[data-id='" + parentID + "']");
			if($('#chm-timeline-content').hasClass('homepage')) {
				navByYear.auto(9000).start(parentID);
			} else {
				navByYear.start(parentID);
			}
			decadeNav.addClass("active");
        	decadeNav.append(currentHTML);

		}
		// de-emphasize years that doesn't have content
		else if (thisYear === undefined) {
            $(this).addClass("emptyYear");

		}
        
        $(this).click(function() {
            if($(this).find("a").length === 1){
                window.location = $(this).find("a").attr("href"); 
                return false;
            }
        });        

	});
	



	// For Landing layouts, remove current/active classes from nav menues
	$('#byCategory .category').each(function(){
		if($(this).attr('id') === 'timeline-' + currentCategory){
			$(this).addClass('current');
        }
	});

							
	/*
	*/
	if(requestedYear === undefined) {
		if(!$("#navByYear").hasClass('homepage')){
			$("#navByYear .decade-nav .active").removeClass('active');
			$("#navByYear .decade-nav .current").removeClass('current');
		}
		$("#decadeNav .currentyear").removeClass('currentyear');
	}
	
		

	$('.chm-timeline-year-entry').each(function() {
		var _media = $(this).find('.media');
		if(_media.length === 0){
			$(this).find('.pure-u-7-12').removeClass('pure-u-7-12').addClass('pure-u-1-1');
        }
	});


	$('.noentries').each(function() {
    	$(this).parent('.years').addClass('emptyYear').css({'cursor': 'default', 'visibility': 'initial'});
	});
	
	
		
	// init Isotope
	var $grid = $('.grid').isotope({
			masonry: {
			columnWidth: '.grid-sizer'
		},
		itemSelector: '.element-item',
		percentPosition: true,
		transitionDuration: '0.5s'
	});

		
	// layout Isotope after each image loads
	$grid.imagesLoaded().progress( function() {
	  $grid.isotope('layout');
	});		
	
	
	// filter items on button click
	$('.filter-button-group').on( 'click', 'button', function() {
		$(this).parents('.filter-button-group').find('.category').each(function(){
			$(this).removeClass('current');
		});
	  var filterValue = $(this).attr('data-filter');
	  var $target = $(this).parent('.category');
	  $target.addClass('current');
	  $grid.isotope({ filter: filterValue });
	});
	
	
	
	$(window).load(function() {

		// left sidr nav menu elements
		var localpath = "/timeline/";
		$('#chm-timeline-exhibits li a[href$="' + localpath + '"]').addClass('active');
		$('#slider li#timeline').addClass('active');

		
		//Landing Pages & Search Elements 
		$('.chm-preview-content').each(function(){
			$(this).masonry({
				itemSelector: '.chm-preview'
			});	
		});
		
		
		//Category View Elements
		$('.chm-category-timeline-sections').each(function(){
			
			var $catSections = $(this).masonry({
				itemSelector: '.chm-category-timeline-section'
			});	
            
            // bind event listener
            $catSections.on('layoutComplete', $(this).onLayout());
		});
		
		$('#chm-timeline-content-year .divider:last hr.content-divider').remove();
		
		// smooth scrolling on anchor
		var _anchor = window.location.hash.split("#")[1];
		$('a[name='+_anchor+']').scrollView();
		
		
	});
	
	// ===================================================
	//
	// Test for responsive screen
	//
	// ======================================================

	//remove empty entry on spining timeline when load the page 
		removeEmpty();

	//When resize the window...
	$(window).resize(function(){

		//remove empty entry on spining timeline when the screen size change
		removeEmpty() ;

		//on catagory page the year ball is always centered
		setTimeout(function(){
			$('div').find('.chm-category-timeline-section').each(function(){
				var position = $(this).position();
				if( $(this).hasClass('left')==1) {
					$(this).removeClass('left');
				} else {
					$(this).removeClass('right');
				}
			
				if($(window).width() < 568 ){
				} else {
					if(position.left === 0) {
						$(this).addClass('left');
					} else {
						$(this).addClass('right');
					}
				}
			});
		},700);

	});

	



	// ===============================================================================================================================================================
	//
	// FUNCTIONS
	//
	// ===============================================================================================================================================================
    
  $.fn.onLayout = function (){
		var yearOffset = [];
		var allYears = [];
		var minOffsetDifference = 126;
			
		$(this).find('.chm-category-timeline-section').each(function(){
    		var position = $(this).position();
			
			
			if($(window).width() < 568 ){
				$(this).addClass('right');
			} else {
				if(position.left === 0) {
					$(this).addClass('left');
				} else {
					$(this).addClass('right');
				}
			}

			var _year = $(this).find('.chm-category-timeline-section-year');
            _year.fadeIn("fast");
		    var _offset = _year.offset();
			yearOffset.push(_offset.top);
			allYears.push(_year);
		});


			
		for(var index in yearOffset){
			var difference = (index === 0) ? minOffsetDifference : (yearOffset[index] - yearOffset[index-1]);
				
			if(difference < minOffsetDifference){
    			var cssOffset =  parseInt(allYears[index].css('top'), 10);
				var top = (minOffsetDifference - difference) + cssOffset;
				allYears[index].css('top', top + 'px');
			}
		} 
  };
	
	
	
	//scroll behevior for main btns
	$.fn.scrollView = function () {
		return this.each(function () {
			$('html, body').delay(1000).animate({
				scrollTop: $(this).offset().top
			}, 750);
		});
	};
	
	
	$.fn.toggleHandler = function() {
		($(this).hasClass("is-active") === true) ? $(this).removeClass("is-active") : $(this).addClass("is-active");
	};

	
	//remove empty entry on medium and small screen, add back on large screen
	function removeEmpty() {
		$('.emptyYear').each(function() {
			var windowWidth = $(window).width();

				if($(this).attr('style') === {'cursor': 'default', 'visibility': 'initial'}){ 
			} else {
				if(windowWidth < 1025 ){
					$(this).addClass('hidden');
				} else {
					$(this).removeClass('hidden');
				}
			}
		});
	}




});

