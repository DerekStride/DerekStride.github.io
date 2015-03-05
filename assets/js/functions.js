$(function() {
  smoothScroll(450);
});

// code swap funciton

function code_swap (source_element, destination_element)
{
  var source = document.getElementById(source_element);
  var destination = document.getElementById(destination_element);

  if (source == null || destination == null) return;

  destination.innerHTML = source.innerHTML;
}

// smoothScroll function is applied from the document ready function
function smoothScroll (duration)
{
  $('a[href^="#"]').on('click', function(event) {

      var target = $( $(this).attr('href') );

      if( target.length ) {
          event.preventDefault();
          $('html, body').animate({
              scrollTop: target.offset().top
          }, duration);
      }
  });
}
