using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace ToastMe.SampleScene
{
	/// <summary>
	/// Used to populate the Dropdown options with all possible
	/// positions that a toast can be presented.
	/// </summary>
	[RequireComponent(typeof(Dropdown))]
	public class DropdownController : MonoBehaviour
	{
		public ToastManager ToastManager;
		
		private Dropdown _dropdown;

		private void Awake()
		{
			_dropdown = GetComponent<Dropdown>();

			if (ToastManager == null)
			{
				Debug.LogError("ToastManager not set in DropdownController.");
				
				gameObject.SetActive(false);
				return;
			}
		}

		private void Start()
		{
			_dropdown.ClearOptions();

			var locations = Enum
					.GetValues(typeof(TextAnchor))
					.Cast<TextAnchor>()
					.Select(x => x.ToString())
					.ToList();
			
			_dropdown.AddOptions(locations);						
			
			_dropdown.onValueChanged.AddListener(x => OnChange(_dropdown));
			
			ChangeToastLocation("LowerRight");
		}

		private void OnChange(Dropdown change)
		{
			var selection = _dropdown.options[change.value].text;
			
			ChangeToastLocation(selection);
		}

		private void ChangeToastLocation(string locationText)
		{
			var location = (TextAnchor) Enum.Parse(typeof(TextAnchor), locationText, true);

			if (Enum.IsDefined(typeof(TextAnchor), location))
			{
				var index = _dropdown.options.FindIndex(
					x => string.Equals(x.text, locationText, StringComparison.InvariantCultureIgnoreCase));

				_dropdown.value = index;
				_dropdown.RefreshShownValue();
				
				ToastManager.SetChildAlignment(location);
			}
		}
	}
}