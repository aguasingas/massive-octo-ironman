/**
 * @file
 * This javascript provides ajax refresh for the dropdown on properties for sale.
 */
(function ($) {
  Drupal.behaviors.propertiesSaleDropdownAjax = {
    attach: function (context) {
      // When a value gets selected on the form…
      $('#properties-for-sale-properties-dropdown-form .form-select').change(function(eventObject) {
        val = $(eventObject.target).val();
        console.log(val);
        // If option is different from None, redirect.
//        if (val != 0) {
//          window.location.href = 'http://msf-ar.dev/taxonomy/term/' + val;
//        }
      });
    }
  };

})(jQuery);
