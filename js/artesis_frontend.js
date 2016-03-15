(function ($) {
  "use strinct";

  Drupal.behaviors.reloadOnBack = {
    attach: function () {
      $(window).bind("pageshow", function(event) {
        if (event.originalEvent.persisted) {
          window.location.reload()
        }
      });
    }
  };
})(jQuery);
