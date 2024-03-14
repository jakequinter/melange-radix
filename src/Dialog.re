[@mel.module "@radix-ui/react-dialog"] [@react.component]
external root:
  (
    ~defaultOpen: bool=?,
    ~open_: bool=?,
    ~onOpenChange: bool => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Root";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external trigger:
  (~asChild: bool=?, ~className: string=?, ~children: React.element) =>
  React.element =
  "Trigger";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external portal:
  (~forceMount: bool=?, ~container: Dom.element=?, ~children: React.element) =>
  React.element =
  "Portal";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external overlay:
  (~asChild: bool=?, ~forceMount: bool=?, ~className: string=?) =>
  React.element =
  "Overlay";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external content:
  (
    ~asChild: bool=?,
    ~forceMount: bool=?,
    ~onOpenAutoFocus: Dom.event => unit=?,
    ~onCloseAutoFocus: Dom.event => unit=?,
    ~onEscapeKeyDown: Dom.event => unit=?,
    ~onPointerDownOutside: ReactEvent.Synthetic.t => unit=?,
    ~onInteractOutside: ReactEvent.Synthetic.t => unit=?,
    ~className: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Content";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external close:
  (~asChild: bool=?, ~className: string=?, ~children: React.element) =>
  React.element =
  "Close";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external title:
  (~asChild: bool=?, ~className: string=?, ~children: React.element) =>
  React.element =
  "Title";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external description:
  (~asChild: bool=?, ~className: string=?, ~children: React.element) =>
  React.element =
  "Description";
