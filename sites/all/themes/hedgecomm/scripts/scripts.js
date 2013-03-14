/**
 * @file
 * javascript handling
 */
jQuery(document).ready(function($) {
  $('.block-carrousel ul.visuals').carouFredSel({
    scroll: {
      fx: 'fade'
    },
    auto : {
      timeoutDuration: 5000
    }
  });
});